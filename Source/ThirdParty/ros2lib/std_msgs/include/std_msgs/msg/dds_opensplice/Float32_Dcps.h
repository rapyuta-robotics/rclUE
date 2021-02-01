#ifndef _H_D63E7EE51D9C598930074B555F3FC4D1_Float32_DCPS_H_
#define _H_D63E7EE51D9C598930074B555F3FC4D1_Float32_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Float32_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Float32_TypeSupportInterface;

            typedef Float32_TypeSupportInterface * Float32_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Float32_TypeSupportInterface> Float32_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Float32_TypeSupportInterface> Float32_TypeSupportInterface_out;


            class Float32_DataWriter;

            typedef Float32_DataWriter * Float32_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Float32_DataWriter> Float32_DataWriter_var;
            typedef DDS_DCPSInterface_out < Float32_DataWriter> Float32_DataWriter_out;


            class Float32_DataReader;

            typedef Float32_DataReader * Float32_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Float32_DataReader> Float32_DataReader_var;
            typedef DDS_DCPSInterface_out < Float32_DataReader> Float32_DataReader_out;


            class Float32_DataReaderView;

            typedef Float32_DataReaderView * Float32_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Float32_DataReaderView> Float32_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Float32_DataReaderView> Float32_DataReaderView_out;

            struct Float32_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Float32_, struct Float32_Seq_uniq_> Float32_Seq;
            typedef DDS_DCPSSequence_var < Float32_Seq> Float32_Seq_var;
            typedef DDS_DCPSSequence_out < Float32_Seq> Float32_Seq_out;

            class  Float32_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Float32_TypeSupportInterface_ptr _ptr_type;
                typedef Float32_TypeSupportInterface_var _var_type;

                static Float32_TypeSupportInterface_ptr _duplicate (Float32_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Float32_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Float32_TypeSupportInterface () {};
                ~Float32_TypeSupportInterface () {};
            private:
                Float32_TypeSupportInterface (const Float32_TypeSupportInterface &);
                Float32_TypeSupportInterface & operator = (const Float32_TypeSupportInterface &);
            };

            class  Float32_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Float32_DataWriter_ptr _ptr_type;
                typedef Float32_DataWriter_var _var_type;

                static Float32_DataWriter_ptr _duplicate (Float32_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Float32_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Float32_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Float32_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Float32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Float32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Float32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Float32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Float32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Float32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Float32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Float32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Float32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32_& instance_data) = 0;

            protected:
                Float32_DataWriter () {};
                ~Float32_DataWriter () {};
            private:
                Float32_DataWriter (const Float32_DataWriter &);
                Float32_DataWriter & operator = (const Float32_DataWriter &);
            };

            class  Float32_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Float32_DataReader_ptr _ptr_type;
                typedef Float32_DataReader_var _var_type;

                static Float32_DataReader_ptr _duplicate (Float32_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Float32_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32_& instance) = 0;

            protected:
                Float32_DataReader () {};
                ~Float32_DataReader () {};
            private:
                Float32_DataReader (const Float32_DataReader &);
                Float32_DataReader & operator = (const Float32_DataReader &);
            };

            class  Float32_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Float32_DataReaderView_ptr _ptr_type;
                typedef Float32_DataReaderView_var _var_type;

                static Float32_DataReaderView_ptr _duplicate (Float32_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float32_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Float32_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float32_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Float32_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float32_& instance) = 0;

            protected:
                Float32_DataReaderView () {};
                ~Float32_DataReaderView () {};
            private:
                Float32_DataReaderView (const Float32_DataReaderView &);
                Float32_DataReaderView & operator = (const Float32_DataReaderView &);
            };
        }

    }

}

#endif
