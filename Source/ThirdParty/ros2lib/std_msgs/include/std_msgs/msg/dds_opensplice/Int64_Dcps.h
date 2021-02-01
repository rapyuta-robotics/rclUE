#ifndef _H_76C5A894B9A7D06AF44EFAD4172EF511_Int64_DCPS_H_
#define _H_76C5A894B9A7D06AF44EFAD4172EF511_Int64_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int64_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int64_TypeSupportInterface;

            typedef Int64_TypeSupportInterface * Int64_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int64_TypeSupportInterface> Int64_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int64_TypeSupportInterface> Int64_TypeSupportInterface_out;


            class Int64_DataWriter;

            typedef Int64_DataWriter * Int64_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int64_DataWriter> Int64_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int64_DataWriter> Int64_DataWriter_out;


            class Int64_DataReader;

            typedef Int64_DataReader * Int64_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int64_DataReader> Int64_DataReader_var;
            typedef DDS_DCPSInterface_out < Int64_DataReader> Int64_DataReader_out;


            class Int64_DataReaderView;

            typedef Int64_DataReaderView * Int64_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int64_DataReaderView> Int64_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int64_DataReaderView> Int64_DataReaderView_out;

            struct Int64_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Int64_, struct Int64_Seq_uniq_> Int64_Seq;
            typedef DDS_DCPSSequence_var < Int64_Seq> Int64_Seq_var;
            typedef DDS_DCPSSequence_out < Int64_Seq> Int64_Seq_out;

            class  Int64_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int64_TypeSupportInterface_ptr _ptr_type;
                typedef Int64_TypeSupportInterface_var _var_type;

                static Int64_TypeSupportInterface_ptr _duplicate (Int64_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int64_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int64_TypeSupportInterface () {};
                ~Int64_TypeSupportInterface () {};
            private:
                Int64_TypeSupportInterface (const Int64_TypeSupportInterface &);
                Int64_TypeSupportInterface & operator = (const Int64_TypeSupportInterface &);
            };

            class  Int64_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int64_DataWriter_ptr _ptr_type;
                typedef Int64_DataWriter_var _var_type;

                static Int64_DataWriter_ptr _duplicate (Int64_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int64_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int64_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int64_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64_& instance_data) = 0;

            protected:
                Int64_DataWriter () {};
                ~Int64_DataWriter () {};
            private:
                Int64_DataWriter (const Int64_DataWriter &);
                Int64_DataWriter & operator = (const Int64_DataWriter &);
            };

            class  Int64_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int64_DataReader_ptr _ptr_type;
                typedef Int64_DataReader_var _var_type;

                static Int64_DataReader_ptr _duplicate (Int64_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int64_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64_& instance) = 0;

            protected:
                Int64_DataReader () {};
                ~Int64_DataReader () {};
            private:
                Int64_DataReader (const Int64_DataReader &);
                Int64_DataReader & operator = (const Int64_DataReader &);
            };

            class  Int64_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int64_DataReaderView_ptr _ptr_type;
                typedef Int64_DataReaderView_var _var_type;

                static Int64_DataReaderView_ptr _duplicate (Int64_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int64_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64_& instance) = 0;

            protected:
                Int64_DataReaderView () {};
                ~Int64_DataReaderView () {};
            private:
                Int64_DataReaderView (const Int64_DataReaderView &);
                Int64_DataReaderView & operator = (const Int64_DataReaderView &);
            };
        }

    }

}

#endif
