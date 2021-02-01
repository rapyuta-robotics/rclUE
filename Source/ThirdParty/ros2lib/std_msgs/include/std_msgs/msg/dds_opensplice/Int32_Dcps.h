#ifndef _H_25CBB9F4F3E3C8DBE72697CD1344DCA4_Int32_DCPS_H_
#define _H_25CBB9F4F3E3C8DBE72697CD1344DCA4_Int32_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int32_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int32_TypeSupportInterface;

            typedef Int32_TypeSupportInterface * Int32_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int32_TypeSupportInterface> Int32_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int32_TypeSupportInterface> Int32_TypeSupportInterface_out;


            class Int32_DataWriter;

            typedef Int32_DataWriter * Int32_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int32_DataWriter> Int32_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int32_DataWriter> Int32_DataWriter_out;


            class Int32_DataReader;

            typedef Int32_DataReader * Int32_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int32_DataReader> Int32_DataReader_var;
            typedef DDS_DCPSInterface_out < Int32_DataReader> Int32_DataReader_out;


            class Int32_DataReaderView;

            typedef Int32_DataReaderView * Int32_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int32_DataReaderView> Int32_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int32_DataReaderView> Int32_DataReaderView_out;

            struct Int32_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Int32_, struct Int32_Seq_uniq_> Int32_Seq;
            typedef DDS_DCPSSequence_var < Int32_Seq> Int32_Seq_var;
            typedef DDS_DCPSSequence_out < Int32_Seq> Int32_Seq_out;

            class  Int32_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int32_TypeSupportInterface_ptr _ptr_type;
                typedef Int32_TypeSupportInterface_var _var_type;

                static Int32_TypeSupportInterface_ptr _duplicate (Int32_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int32_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int32_TypeSupportInterface () {};
                ~Int32_TypeSupportInterface () {};
            private:
                Int32_TypeSupportInterface (const Int32_TypeSupportInterface &);
                Int32_TypeSupportInterface & operator = (const Int32_TypeSupportInterface &);
            };

            class  Int32_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int32_DataWriter_ptr _ptr_type;
                typedef Int32_DataWriter_var _var_type;

                static Int32_DataWriter_ptr _duplicate (Int32_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int32_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int32_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int32_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32_& instance_data) = 0;

            protected:
                Int32_DataWriter () {};
                ~Int32_DataWriter () {};
            private:
                Int32_DataWriter (const Int32_DataWriter &);
                Int32_DataWriter & operator = (const Int32_DataWriter &);
            };

            class  Int32_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int32_DataReader_ptr _ptr_type;
                typedef Int32_DataReader_var _var_type;

                static Int32_DataReader_ptr _duplicate (Int32_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int32_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32_& instance) = 0;

            protected:
                Int32_DataReader () {};
                ~Int32_DataReader () {};
            private:
                Int32_DataReader (const Int32_DataReader &);
                Int32_DataReader & operator = (const Int32_DataReader &);
            };

            class  Int32_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int32_DataReaderView_ptr _ptr_type;
                typedef Int32_DataReaderView_var _var_type;

                static Int32_DataReaderView_ptr _duplicate (Int32_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int32_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int32_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int32_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int32_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int32_& instance) = 0;

            protected:
                Int32_DataReaderView () {};
                ~Int32_DataReaderView () {};
            private:
                Int32_DataReaderView (const Int32_DataReaderView &);
                Int32_DataReaderView & operator = (const Int32_DataReaderView &);
            };
        }

    }

}

#endif
