#ifndef _H_66603700D1C180F3EAACF87C11821884_Int16_DCPS_H_
#define _H_66603700D1C180F3EAACF87C11821884_Int16_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int16_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int16_TypeSupportInterface;

            typedef Int16_TypeSupportInterface * Int16_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int16_TypeSupportInterface> Int16_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int16_TypeSupportInterface> Int16_TypeSupportInterface_out;


            class Int16_DataWriter;

            typedef Int16_DataWriter * Int16_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int16_DataWriter> Int16_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int16_DataWriter> Int16_DataWriter_out;


            class Int16_DataReader;

            typedef Int16_DataReader * Int16_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int16_DataReader> Int16_DataReader_var;
            typedef DDS_DCPSInterface_out < Int16_DataReader> Int16_DataReader_out;


            class Int16_DataReaderView;

            typedef Int16_DataReaderView * Int16_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int16_DataReaderView> Int16_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int16_DataReaderView> Int16_DataReaderView_out;

            struct Int16_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Int16_, struct Int16_Seq_uniq_> Int16_Seq;
            typedef DDS_DCPSSequence_var < Int16_Seq> Int16_Seq_var;
            typedef DDS_DCPSSequence_out < Int16_Seq> Int16_Seq_out;

            class  Int16_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int16_TypeSupportInterface_ptr _ptr_type;
                typedef Int16_TypeSupportInterface_var _var_type;

                static Int16_TypeSupportInterface_ptr _duplicate (Int16_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int16_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int16_TypeSupportInterface () {};
                ~Int16_TypeSupportInterface () {};
            private:
                Int16_TypeSupportInterface (const Int16_TypeSupportInterface &);
                Int16_TypeSupportInterface & operator = (const Int16_TypeSupportInterface &);
            };

            class  Int16_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int16_DataWriter_ptr _ptr_type;
                typedef Int16_DataWriter_var _var_type;

                static Int16_DataWriter_ptr _duplicate (Int16_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int16_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int16_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int16_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16_& instance_data) = 0;

            protected:
                Int16_DataWriter () {};
                ~Int16_DataWriter () {};
            private:
                Int16_DataWriter (const Int16_DataWriter &);
                Int16_DataWriter & operator = (const Int16_DataWriter &);
            };

            class  Int16_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int16_DataReader_ptr _ptr_type;
                typedef Int16_DataReader_var _var_type;

                static Int16_DataReader_ptr _duplicate (Int16_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int16_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16_& instance) = 0;

            protected:
                Int16_DataReader () {};
                ~Int16_DataReader () {};
            private:
                Int16_DataReader (const Int16_DataReader &);
                Int16_DataReader & operator = (const Int16_DataReader &);
            };

            class  Int16_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int16_DataReaderView_ptr _ptr_type;
                typedef Int16_DataReaderView_var _var_type;

                static Int16_DataReaderView_ptr _duplicate (Int16_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int16_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int16_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16_& instance) = 0;

            protected:
                Int16_DataReaderView () {};
                ~Int16_DataReaderView () {};
            private:
                Int16_DataReaderView (const Int16_DataReaderView &);
                Int16_DataReaderView & operator = (const Int16_DataReaderView &);
            };
        }

    }

}

#endif
